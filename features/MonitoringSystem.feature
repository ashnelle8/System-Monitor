Feature: System resource monitoring

  Scenario: System resource monitoring
    Given CPU monitor is initialized
    And Disk monitor is initialized
    And Memory monitor is initialized
    And Network monitor is initialized
    When I recover the use of resources
    Then CPU utilization must be greater than or equal to 0
    And Disk utilization must be greater than or equal to 0
    And Memory utilization must be greater than or equal to 0
    And Network utilization must be greater than or equal to 0